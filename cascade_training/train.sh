#! /bin/bash
/bin/opencv_traincascade -data classifier_bin_7 -vec positives.vec -bg negatives.dat -w 20 -h 20 -numStages 55 -minHitRate 0.999 -maxFalseAlarmRate 0.5 -numPos 7500 -numNeg 7000 -mode ALL -precalcValBufSize 3750 -precalcIdxBufSize 3750 -maxWeakCount 1000
