<h1 align="center">Hi 👋, I'm Mohammed Nowful Khan</h1>
<h3 align="center">Hardware hacker</h3>

# Arduino Pro Micro Rubber Ducky with SD Card Support

## Introduction
This project utilizes an Arduino Pro Micro to emulate a keystroke, enabling HID attacks to the Rubber Ducky. The device reads Ducky scripts from an SD card and executes predefined actions.

## Author
- **Hacker Nowful**
  - Instagram: [@mr_white_hat._](https://www.instagram.com/mr_white_hat._/)
  - YouTube: [Hacker Nowful](https://www.youtube.com/channel/UCu1kFHR9foStyJXqjo6JKDg)
  - Website: [Hypesec Infotech](https://www.hypesecinfotech.com/)

## Usage
1. Connect the Arduino Pro Micro to the SD card as follows:
    - **Pro Micro Pin** - **SD Card Pin**
    - D4 - CS
    - D15 - SCK
    - D16 - MOSI
    - D14 - MISO
    - VCC - VCC
    - GND - GND

2. Upload the provided code to the Arduino Pro Micro.

3. **Required Libraries**:
   - `Keyboard.h`
   - `SD.h`
   - `SPI.h`

4. **Example Code**:
   ```cpp
   #include "sd_ducky.h"
   void setup() {
     activateducky("script.txt");
   }

   void loop() {
     // Nothing needs to be done here.
   }
   
5. Create Ducky scripts and save them on the SD card with the filename `script.txt`.


## Example Ducky Script
Create a Ducky script (e.g., `script.txt`) and save it on the SD card. Below is an example Ducky script:

```plaintext
DELAY 500
STRING notepad
ENTER
DELAY 800
STRING Hello, this is a Ducky script!
ENTER 
```

6. Power on the Pro Micro, and it will execute the actions specified in the Ducky script.


## Important Note
**This project is for educational purposes only. The author assumes no responsibility for the misuse of this code. Be aware of legal and ethical considerations when deploying such devices.**

## Disclaimer
All videos and tutorials are for informational and educational purposes only. Ethical hacking, information security, and cyber security should be familiar subjects to anyone using digital information and computers. The provided tutorials are for those interested in learning about Ethical Hacking and related subjects. Hacking tutorials are against the misuse of information, and it is strongly advised against it.

## Acknowledgments
Thanks to the open-source community for providing libraries and tools used in this project.

**Happy hacking!**

<p align="left"> <img src="https://komarev.com/ghpvc/?username=hackernowful&label=Profile%20views&color=0e75b6&style=flat" alt="hackernowful" /> </p>

<p align="left"> <a href="https://github.com/ryo-ma/github-profile-trophy"><img src="https://github-profile-trophy.vercel.app/?username=hackernowful" alt="hackernowful" /></a> </p>

<p align="left"> <a href="https://twitter.com/hypesecinfotech" target="blank"><img src="https://img.shields.io/twitter/follow/hypesecinfotech?logo=twitter&style=for-the-badge" alt="hypesecinfotech" /></a> </p>

- 🔭 I’m currently owning a **Hypesec Infotech**

- 👨‍💻 All of my projects are available at [https://linktr.ee/Hackernowful](https://linktr.ee/Hackernowful)

- 📝 I regularly write articles on [https://hypesecinfotech.com/blog.html](https://hypesecinfotech.com/blog.html)

- 💬 Ask me about **Cyber Security**

- 📫 How to reach me **nowful@hypesecinfotech.com**

<h3 align="left">Connect with me:</h3>
<p align="left">
<a href="https://twitter.com/hypesecinfotech" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/twitter.svg" alt="hypesecinfotech" height="30" width="40" /></a>
<a href="https://linkedin.com/in/hypesec infotech" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/linked-in-alt.svg" alt="hypesec infotech" height="30" width="40" /></a>
<a href="https://instagram.com/mr_white_hat._" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/instagram.svg" alt="mr_white_hat._" height="30" width="40" /></a>
<a href="https://www.youtube.com/@hackernowful" target="blank"><img align="center" src="https://raw.githubusercontent.com/rahuldkjain/github-profile-readme-generator/master/src/images/icons/Social/youtube.svg" alt="hypesec infotech" height="30" width="40" /></a>
</p>

<h3 align="left">Languages and Tools:</h3>
<p align="left"> <a href="https://www.arduino.cc/" target="_blank" rel="noreferrer"> <img src="https://cdn.worldvectorlogo.com/logos/arduino-1.svg" alt="arduino" width="40" height="40"/> </a> <a href="https://www.gnu.org/software/bash/" target="_blank" rel="noreferrer"> <img src="https://www.vectorlogo.zone/logos/gnu_bash/gnu_bash-icon.svg" alt="bash" width="40" height="40"/> </a> <a href="https://www.blender.org/" target="_blank" rel="noreferrer"> <img src="https://download.blender.org/branding/community/blender_community_badge_white.svg" alt="blender" width="40" height="40"/> </a> <a href="https://firebase.google.com/" target="_blank" rel="noreferrer"> <img src="https://www.vectorlogo.zone/logos/firebase/firebase-icon.svg" alt="firebase" width="40" height="40"/> </a> <a href="https://git-scm.com/" target="_blank" rel="noreferrer"> <img src="https://www.vectorlogo.zone/logos/git-scm/git-scm-icon.svg" alt="git" width="40" height="40"/> </a> <a href="https://ifttt.com/" target="_blank" rel="noreferrer"> <img src="https://www.vectorlogo.zone/logos/ifttt/ifttt-ar21.svg" alt="ifttt" width="40" height="40"/> </a> <a href="https://developer.mozilla.org/en-US/docs/Web/JavaScript" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/javascript/javascript-original.svg" alt="javascript" width="40" height="40"/> </a> <a href="https://www.linux.org/" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/linux/linux-original.svg" alt="linux" width="40" height="40"/> </a> <a href="https://www.php.net" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/php/php-original.svg" alt="php" width="40" height="40"/> </a> <a href="https://www.python.org" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/python/python-original.svg" alt="python" width="40" height="40"/> </a> <a href="https://www.ruby-lang.org/en/" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/ruby/ruby-original.svg" alt="ruby" width="40" height="40"/> </a> </p>

<p><img align="left" src="https://github-readme-stats.vercel.app/api/top-langs?username=hackernowful&show_icons=true&locale=en&layout=compact" alt="hackernowful" /></p>

<p>&nbsp;<img align="center" src="https://github-readme-stats.vercel.app/api?username=hackernowful&show_icons=true&locale=en" alt="hackernowful" /></p>

<p><img align="center" src="https://github-readme-streak-stats.herokuapp.com/?user=hackernowful&" alt="hackernowful" /></p>
