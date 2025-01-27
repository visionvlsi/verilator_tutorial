sudo apt-get install git help2man perl python3 make --assume-yes
sudo apt-get install g++ --assume-yes
sudo apt-get install libfl2 --assume-yes
sudo apt-get install libfl-dev  --assume-yes
sudo apt-get install zlibc zlib1g zlib1g-dev --assume-yes
sudo apt-get install ccache --assume-yes
sudo apt-get install mold --assume-yes
sudo apt-get install libgoogle-perftools-dev numactl --assume-yes
sudo apt-get install perl-doc --assume-yes
sudo apt-get install git autoconf flex bison --assume-yes
cd
git clone https://github.com/verilator/verilator 
cd verilator
git pull
autoconf   
./configure
make -j `nproc` 
make test
sudo make install
