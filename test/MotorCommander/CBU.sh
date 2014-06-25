echo 'copying libs...'
cp -r ../../robot/lib/ ./lib
sudo ino clean
sudo ino build
sudo ino upload
