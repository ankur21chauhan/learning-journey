#include<bits/stdc++.h>
using namespace std;
class Camera{
    public:
    virtual void takePhoto() = 0;
    virtual ~Camera(){}
};

class MusicPlayer{
    public:
    virtual void playMusic() = 0;
    virtual ~MusicPlayer(){};
};

class SmartPhone : public Camera, public MusicPlayer{
    public:
    void takePhoto() override{
        cout<<"Image taken"<<endl;
    };
    void  playMusic() override{
        cout<<"Music Played"<<endl;
    };
};

int main() {
    SmartPhone obj;

    obj.takePhoto();
    obj.playMusic();

    return 0;
}
