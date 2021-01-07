# GODDESSAnalysis

This is a sort/analysis script for data collected with the coupled GODDESS (with GRETINA) detectors.
This script is intended to be run following execution of the goddessSort unpack/merge/sort code written by Josh Hooker (https://github.com/joshhooker/goddessSort)
It takes the straightforward tree format output by goddessSort, calibrates hits, and sorts the events into a tree containing meaningful quantities like
angle, energy, excitation energy, etc.

Basic experiment parameters (masses, energies, etc.) are listed in the GODDESSAnalysis.h file and should be modified in accordance with the experiment you are analyzing.
Additionally, the calibration files in cal_files should be updated in accordance with the calibrations gathered from your own run.
These calibration .dat files can be constructed using the excellent suite of calibration scripts written by Rajesh Ghimire (https://github.com/rajghim/SX3-Calibration)

Compile using g++ GODDESSAnalysis.cpp -std=c++0x `root-config --cflags --libs` -o GODDESSAnalysis

This script was written entirely by Chad Ummel, but was significantly influenced by analysis scripts written by
Gemma Wilson (https://github.com/gemgemloulou/GODDESS2019) and Rajesh Ghimire (https://github.com/rajghim/Analysis)
