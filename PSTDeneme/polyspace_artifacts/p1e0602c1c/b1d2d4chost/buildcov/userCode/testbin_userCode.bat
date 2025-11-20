
set skipSetupArg=%2
if "%skipSetupArg%" NEQ "skip_setup_msvc" (
call "setup_msvc.bat"
)

cd .

if "%1"=="" (nmake  CC="\"C:\Program Files\Polyspace\R2024a\polyspace\bin\polyspace-code-profiler.exe\" -instrument -options-file \"E:\Denemeler\PSTDeneme\polyspace_artifacts\p1e0602c1c\b1d2d4chost\buildcov\userCode\testbin_instrum_options.txt\" -- cl" CPP="\"C:\Program Files\Polyspace\R2024a\polyspace\bin\polyspace-code-profiler.exe\" -instrument -options-file \"E:\Denemeler\PSTDeneme\polyspace_artifacts\p1e0602c1c\b1d2d4chost\buildcov\userCode\testbin_instrum_options.txt\" -- cl" -f testbin_userCode.mk all) else (nmake  CC="\"C:\Program Files\Polyspace\R2024a\polyspace\bin\polyspace-code-profiler.exe\" -instrument -options-file \"E:\Denemeler\PSTDeneme\polyspace_artifacts\p1e0602c1c\b1d2d4chost\buildcov\userCode\testbin_instrum_options.txt\" -- cl" CPP="\"C:\Program Files\Polyspace\R2024a\polyspace\bin\polyspace-code-profiler.exe\" -instrument -options-file \"E:\Denemeler\PSTDeneme\polyspace_artifacts\p1e0602c1c\b1d2d4chost\buildcov\userCode\testbin_instrum_options.txt\" -- cl" -f testbin_userCode.mk %1)
@if errorlevel 1 goto error_exit

exit /B 0

:error_exit
echo The make command returned an error of %errorlevel%
exit /B 1