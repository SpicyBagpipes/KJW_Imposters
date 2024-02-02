@echo off
hemtt.exe script bump_minor
hemtt.exe release --no-archive
hemtt.exe script clear_patch
start "" ".hemttout\release"