echo 'copying libs...'
rm -rf ./lib
cp -r ../../robot/lib/ ./lib
sudo ino build
sudo ino upload
sudo ino serial
