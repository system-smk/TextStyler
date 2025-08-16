
# 🎨 ConsoleFX

ConsoleFX est une classe C++ simple et puissante qui permet de styliser l'affichage dans le terminal en utilisant les séquences ANSI. Elle offre des fonctions statiques pour appliquer des couleurs, des effets visuels, effacer l'écran, gérer les retours à la ligne, et afficher des messages enrichis.

---

## 🚀 Fonctionnalités

- ✅ Couleurs de texte : rouge, vert, jaune, bleu
- ✅ Effets visuels : gras, souligné, clignotement
- ✅ Nettoyage de l'écran
- ✅ Gestion des retours à la ligne
- ✅ Affichage stylisé avec `afficherMessage()`
- ✅ Interface statique, facile à utiliser et à intégrer

---

## 📁 Structure du projet

```
ConsoleFX/
│
├── constyle.hpp       # Déclaration de la classe Console
├── constyle.cpp       # Implémentation des méthodes
└── main.cpp          # Exemple d'utilisation
```

---

## 🧾 Description des fichiers

### `Console.hpp`

Déclare la classe `Console` et ses méthodes statiques :

- `rouge()`, `vert()`, `jaune()`, `bleu()`, `reset()`  
- `gras()`, `souligner()`, `clignote()`  
- `clear()` : efface l’écran  
- `nl(int n = 1)` : ajoute des retours à la ligne  
- `afficherMessage(const std::string& msg)` : affiche un message stylisé

### `Console.cpp`

Implémente les méthodes de la classe `Console` en utilisant `std::cout` et les séquences ANSI pour modifier l'affichage du terminal.

---

## 🛠️ Installation

Aucune dépendance externe requise. Il suffit d’ajouter les fichiers `constyle.hpp` et `constyle.cpp` à votre projet.

---

## 🧪 Exemple d’utilisation

```cpp
#include "constyle.hpp"
#include <iostream>

int main() {
    Console::clear();
    Console::vert();
    Console::gras();
    std::cout << "Bienvenue dans le terminal stylisé !" << std::endl;
    Console::reset();

    Console::nl();
    Console::afficherMessage("⚠️ Ceci est un message d'alerte !");
}
```

---

## 🧰 Compilation

Utilisez `g++` pour compiler :

```bash
g++ main.cpp constyle.cpp -o monProgramme
```

Puis lancez :

```bash
./monProgramme
```

---

## 💡 Compatibilité

- ✅ Linux / macOS : support natif des séquences ANSI
- ⚠️ Windows : nécessite parfois `system("")` pour activer les séquences ANSI dans `cmd.exe`

---

## 📌 Roadmap

- [ ] Ajout de couleurs de fond
- [ ] Support des styles personnalisés (via paramètres)
- [ ] Intégration d’un logger stylisé
- [ ] Création d’un namespace `ConsoleFX`
- [ ] Générateur automatique de `.hpp/.cpp` pour d'autres classes

---

## 📜 Licence

Ce projet est sous licence MIT — libre à toi de l’utiliser, le modifier, le partager ✨

---

## 👤 Auteur

Développé avec passion par **Mathieu-Karim**  
Tu peux me contacter pour toute suggestion ou amélioration !

---

## 🙌 Remerciements

Merci à tous ceux qui aiment rendre leurs terminaux un peu plus vivants 💚
README rédigé automatiquement par une intelligence artificielle afin d’accélérer la documentation du projet.

