# 🗺️ Treasure Hunt Adventure

A **text-based adventure game** written in C++ where you navigate through a jungle, make critical choices, and try to collect as much treasure as possible — without losing all your health!

---

## 🎮 Gameplay

You are lost in a jungle with **100 HP**. Choose your path wisely — every decision affects your **health** and **treasure**.

### Decision Tree
 🌴 JUNGLE START
                   (Health: 100)
                   /            \
          🕳️ CAVE              🌲 FOREST
          /    \                /      \
 🔦 Torch    👁️ Sound    🌳 Tree    🐾 Tracks
  /    \       /    \      /    \      /    \

  Chest Ignore Eyes Run Fruit Jump Bush Hide
+80💰 -25❤️ +50💰 -20❤️ +15❤️ -20❤️ +70💰 -30❤️
+10❤️ (bats) (fall) (scratch)
### Outcomes at a Glance

| Path | Choice | Health Change | Treasure Gained |
|---|---|---|---|
| Cave → Torch | Open chest | **+10** ❤️ | **+80** 💰 |
| Cave → Torch | Ignore chest | **−25** ❤️ | 0 |
| Cave → Sound | Investigate | 0 | **+50** 💰 |
| Cave → Sound | Run away | **−20** ❤️ | 0 |
| Forest → Tree | Pick fruits | **+15** ❤️ | 0 |
| Forest → Tree | Jump branch | **−20** ❤️ | 0 |
| Forest → Tracks | Search bushes | 0 | **+70** 💰 |
| Forest → Tracks | Stay hidden | **−30** ❤️ | 0 |

> ⚠️ If your health drops to **0 or below**, it's **Game Over**!

---

## 🛠️ Prerequisites

- **C++ Compiler** (GCC, Clang, or MSVC)
  - **Linux:** `sudo apt install g++`
  - **macOS:** `xcode-select --install`
  - **Windows:** Install [MinGW](https://www.mingw-w64.org/) or use Visual Studio

---

## 🚀 How to Compile & Run

1. **Clone the repository**

   ```bash
   git clone https://github.com/yourusername/treasure-hunt-adventure.git
   cd treasure-hunt-adventure
   
2.Compile

Bash

g++ -o treasure_hunt main.cpp   

3.Run

Bash

./treasure_hunt


📁 Project Structure
treasure-hunt-adventure/
├── main.cpp       # Game source code (single-file)
├── README.md      # This file
└── LICENSE        # MIT License

🧩 Code Highlights
Concept	Implementation
OOP	TreasureHunt class encapsulates all game logic
Encapsulation	health and treasure are private members
Constructor	Initializes health to 100 and treasure to 0
Branching Logic	Nested if-else chains simulate decision paths
State Tracking	Health and treasure update dynamically per choice

📸 Sample Output
--- Treasure Hunt Adventure ---
You are lost in a jungle.
Health: 100

1. Enter the Cave
2. Walk into the Forest
Enter your choice: 1

You entered a dark cave.
1. Light a torch and explore
2. Follow a strange sound
Enter choice: 1

You discover an old chest.
1. Open the chest carefully
2. Ignore it and continue exploring
1

You found treasure!

Adventure Completed!
Final Health: 110
Treasure Collected: 80

🔮 Future Enhancements
 Add more scenes (river, mountain, ruins)
 Implement a loop for multi-round gameplay
 Add an inventory system for items
 Introduce random events using <cstdlib>
 Save/Load game state to a file
 Add difficulty levels (Easy / Hard)
 Port to a GUI using SFML or SDL
🤝 Contributing
Contributions are welcome!

Fork the repository
Create a feature branch (git checkout -b feature/new-scene)
Commit your changes (git commit -m 'Add river scene')
Push to the branch (git push origin feature/new-scene)
Open a Pull Request

📄 License
This project is licensed under the MIT License — see the LICENSE file for details.

📬 Contact
Vatsal Shah — vatsalbuis@gmail.com

Project Link: https://github.com/vatsalshah2946/treasure-hunt-adventure
