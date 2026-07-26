param(
    [Parameter(Mandatory = $true)]
    [string]$SourcePath,

    [Parameter(Mandatory = $true)]
    [string]$OutputName,

    [switch]$Run
)

chcp 65001 | Out-Null
[Console]::OutputEncoding = [System.Text.Encoding]::UTF8
$OutputEncoding = [System.Text.Encoding]::UTF8

$env:Path = 'C:\msys64\ucrt64\bin;C:\msys64\usr\bin;' + $env:Path
$env:TEMP = 'C:\dev\tmp'
$env:TMP = 'C:\dev\tmp'

$outDir = 'C:\dev\tmp\2026STC'
$out = Join-Path $outDir "$OutputName.exe"
New-Item -ItemType Directory -Force -Path $outDir | Out-Null

& 'C:\msys64\ucrt64\bin\g++.exe' -std=c++17 -static -static-libgcc -static-libstdc++ -finput-charset=UTF-8 -fexec-charset=UTF-8 -o $out $SourcePath
if ($LASTEXITCODE -ne 0) {
    exit $LASTEXITCODE
}

if ($Run) {
    & $out
}
