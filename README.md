# simple-calculator-qt
Simple Qt calculator for termux (x11-repo) and linux made in QtCreator

![image](Screenshot_20210808-194038.png)

### Requirements

- Qt >= 5.10
- qmake

### Installation of dependencies (termux) 

```bash
pkg update 
pkg install qt5-qt ase qt5-qttools
```

# Build the application 

```bash
git clone https://github.com/Yisus7u7/simple-calculator-qt
cd simple-calculator-qt
qmake
make
```

And run 

```
./calculator-qt
```
