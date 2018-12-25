# Christmas Eve Eve

This project idea came from a famous scene from the popular show, Friends. In the scene one of the characters exclaims "Happy Christmas Eve Eve". This idea expands upon that by printing to the console the correct eve of christmas that it is.

For Example on December 22 it will print out
```
Day: 362
Eve Amount: 3
Christmas eve eve eve
```

## Getting Started

Follow these instructions to download a release version of this program and to learn how to install it.

### Prerequisites

Current versions work exclusively on Linux and Mac OSX.

Please be patient as release versions are coming for Windows.

<br>

It is possible to compile the main.c file for use on Windows.

You can download the Repository from [here](https://github.com/CThompson01/christmas-eve-eve/archive/master.zip)

Follow [these instructions](https://docs.microsoft.com/en-us/cpp/build/walkthrough-compile-a-c-program-on-the-command-line?view=vs-2017) to compile the file with Visual Studios


### Installing

Follow these instructions to unpackage and install releases found on our [release page](https://github.com/CThompson01/christmas-eve-eve/releases).
[Latest Stable Release](https://github.com/CThompson01/christmas-eve-eve/releases/tag/v0.1-alpha)

<br>
After downloading open a terminal

```
On Linux this can typically be done by pressing ctrl+alt+t

On Mac OSX use the search bar and type "terminal"
```

Navigate to your download location. Typically in your downloads folder.

```
cd Downloads/
```

Now unpackage the tar file. 

If you have a different release version, replace the "0.1" with the correct version.

```
tar -xzvf christmas-0.1.tar.gz
```

Now navigate to the unpackaged files.

Again if you have a different release version, replace the "0.1" with the correct version.

```
cd christmas-0.1.tar.gz/
```

Run the configure file to configure the program to your system.
If your system is unable to run the program it will return an error message.

```
./configure
```

Now run these commands to finish installation. The second command may ask for your password in order to install properly

```
make
sudo make install
```

And it's installed! Now anytime you open up your console, you can simply type "christmas" and find out how many eves it is!

## Authors

* **Chase Thompson** - *Main Developer* - [CThompson01](https://github.com/CThompson01)
* **Brandon Richards** - *Idea* - [bqrichards](https://github.com/bqrichards)
* **Billie Thompson** - *README.md Template* - [PurpleBooth](https://github.com/PurpleBooth)

See also the list of [contributors](https://github.com/your/project/contributors) who participated in this project.

## License

This project is licensed under the GNU General Public License v3.0 - see the [LICENSE.md](LICENSE.md) file for details

## Acknowledgments

* Brandon Richards for the idea at 1:06 am on Monday, December 24, 2018
* Billie Thompson for README.md Template
