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
add_executable(8-score-rater                8-score-rater/ScoreRater.cpp)
add_executable(9-score-rater-2              9-score-rater-2/ScoreRater2.cpp)
add_executable(10-score-rater-3             10-score-rater-3/ScoreRater3.cpp)
add_executable(11-menu-chooser              11-menu-chooser/MenuChooser.cpp)
add_executable(12-play-again                12-play-again/PlayAgain.cpp)
add_executable(13-play-again-2              13-play-again-2/PlayAgain2.cpp)
add_executable(14-finicky-counter           14-finicky-counter/FinickyCounter.cpp)
add_executable(15-game-designers-network    15-game-designers-network/GameDesignersNetwork.cpp)
add_executable(16-die-roller                16-die-roller/DieRoller.cpp)
add_executable(17-guess-my-number           17-guess-my-number/GuessMyNumber.cpp)
add_executable(18-counter                   18-counter/Counter.cpp)
add_executable(19-string-tester             19-string-tester/StringTester.cpp)
add_executable(20-hero-inventory            20-hero-inventory/HeroInventory.cpp)
add_executable(21-tic-tac-toe               21-tic-tac-toe/TicTacToe.cpp)
add_executable(22-word-jumble               22-word-jumble/WordJumble.cpp)
add_executable(23-hero-inventory-2          23-hero-inventory-2/HeroInventory2.cpp)
add_executable(24-high-scores               24-high-scores/HighScores.cpp)
add_executable(25-hangman                   25-hangman/Hangman.cpp)
add_executable(26-instructions              26-instructions/Instructions.cpp)
add_executable(27-yes-or-no                 27-yes-or-no/YesOrNo.cpp)
add_executable(28-scoping                   28-scoping/Scoping.cpp)
