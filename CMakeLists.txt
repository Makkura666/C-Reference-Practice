cmake_minimum_required(VERSION 2.8)
set(ENGINE_NAME "learning-c-plus-plus")

# ┌──────────────────────────────────────────────────────────────────┐
# │  FLAGS                                                           │
# └──────────────────────────────────────────────────────────────────┘
# C++ 11
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")
# Linker
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -framework IOKit")

# ┌──────────────────────────────────────────────────────────────────┐
# │  Projects                                                        │
# └──────────────────────────────────────────────────────────────────┘
add_executable(1-game-over                  1-game-over/GameOver.cpp)
add_executable(2-game-over-2                2-game-over-2/GameOver2.cpp)
add_executable(3-expensive-calculator       3-expensive-calculator/ExpensiveCalculator.cpp)
add_executable(4-game-stats                 4-game-stats/GameStats.cpp)
add_executable(5-game-stats-2               5-game-stats-2/GameStats2.cpp)
add_executable(6-game-stats-3               6-game-stats-3/GameStats3.cpp)
add_executable(7-lost-fortune               7-lost-fortune/LostFortune.cpp)
add_executable(8-end-lost-fortune           8-end-lost-fortune/EndLostFortune.cpp)
add_executable(9-score-rater                9-score-rater/ScoreRater.cpp)
add_executable(10-score-rater-2             10-score-rater-2/ScoreRater2.cpp)
add_executable(11-score-rater-3             11-score-rater-3/ScoreRater3.cpp)
add_executable(12-menu-chooser              12-menu-chooser/MenuChooser.cpp)
add_executable(13-play-again                13-play-again/PlayAgain.cpp)
add_executable(14-play-again-2              14-play-again-2/PlayAgain2.cpp)
add_executable(15-finicky-counter           15-finicky-counter/FinickyCounter.cpp)
add_executable(16-game-designers-network    16-game-designers-network/GameDesignersNetwork.cpp)
add_executable(17-die-roller                17-die-roller/DieRoller.cpp)
