## Overview
About 4 years ago, I downloaded Project DIVA and played one song called `Systematic Love`. In the background of the game, I noticed code being displayed, and was interested to see what the code would output. Needless to say, the code was not functional. I outlined the code shown in the game in this repository: https://github.com/clocke3/systematicLoveAnalysis

Recently I decided to touch base on it again and get it to work in some capacity. Sadly, that turned into abandoning most of its original code to accurately print the phrase "SYSTEMATIC LOVE" in a heart comprised of "v" characters.

## Images
When fixing the original file to get it to compile, this was the output:

<img width="301" alt="Screenshot 2025-04-15 at 11 01 05 AM" src="https://github.com/user-attachments/assets/e06d88d5-2268-4d07-81a9-ce21e3ed3e2b" />

After refactoring the code: this is what compiled:

<img width="535" alt="Screenshot 2025-04-15 at 6 34 18 PM" src="https://github.com/user-attachments/assets/986f7709-015e-4f0f-aeb3-5777ddf92533" />


# How To Run

1. Download repo folder
2. In terminal, navigate to repo folder
3. Run `g++ -o <output_name> systematicLove.cpp` (<output_name> can be whatever you want)
4. Run  `./<output_name>`

