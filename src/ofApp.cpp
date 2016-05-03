#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    ofSetFrameRate(60);
    
    decoder.decode("spacegif.gif");
    file = decoder.getFile();
    ofEnableSmoothing();

    
    x = 0;
    j = 0;
    z = 0;
    l = 0;
    

}

//--------------------------------------------------------------
void ofApp::update(){
    
    
    x++;
    
    if(x ==100){
        x = 0;
    
    }
    
    
    j++;
    
    if( j== 100){
        j = 0;
    
    }
    
    z++;
    
    if(z == 270){
    
        z = 0;
    
    }
    
    
    l++;
    
    if(l == 40){
    
        l = 0;
    
    }
    

}

//--------------------------------------------------------------
void ofApp::draw(){
   
    ofPushMatrix();
    
    ofBackground(5);
    
    
//    ofColor white;
//    
//    white.r = 255;
//    white.g = 255;
//    white.b = 255;
//    
//    ofSetColor(white);
    
    ofSetColor(255);
    
    ofPopMatrix();
    
    ofPushMatrix();
   
    float normalX = float(ofGetMouseX())/ofGetWidth();
    
    file.drawFrame(normalX * file.getNumFrames(), ofGetWidth()/2-155, ofGetHeight()/2-145);
    
    ofPopMatrix();
   
    ofPushMatrix();
    
    ofEnableAlphaBlending();
    
    ofTranslate(ofGetWidth()/2 + 45, ofGetHeight()/2 + 55);
    ofSetLineWidth(20);
    ofSetColor(0,0,255);
    
    int circle_resolution = 1000;
    int radius = 220;
    
    ofPolyline circle;
    
    for(int i=0; i<circle_resolution; i++){
    
        float angle = TWO_PI/circle_resolution*i;
        float x = cos(angle) * radius;
        float y = sin(angle) * radius;
        
        circle.addVertex(ofPoint(x,y));
        ofDisableAlphaBlending();
    }
    
    
    
    circle.close();
    circle.draw();
    
    
//    ofNoFill();
   
//    ofCircle(ofGetWidth()/2+60, ofGetHeight()/2+60, 250);
    
    ofPopMatrix();
    
    ofPushMatrix();
    
    
    ofNoFill();
    ofSetColor(0, 0, 255);
    ofSetLineWidth(.5);
    
 
    
    ofDrawRectangle(50, 50, 400 + x, 100);
            
                
            
    
    
    
    ofPopMatrix();
    
    
    ofDrawRectangle(50, 200 + j, 140, 250);
    
    ofDrawRectangle(900, 90 , 50, 300 + z);
    ofSetLineWidth(5);
    
    ofCircle(ofGetWidth()/2 + 45, ofGetHeight()/2 + 55, 225 +l);
    
    ofSetLineWidth(5);
    ofCircle(ofGetWidth()/2 + 45, ofGetHeight()/2 + 55, 240 + l);
    
    ofSetLineWidth(10);
    ofCircle(ofGetWidth()/2 + 45, ofGetHeight()/2 + 55, 250 + l);
    
    ofSetLineWidth(10);
    ofCircle(ofGetWidth()/2 + 45, ofGetHeight()/2 + 55, 60 + l);
    
    ofSetLineWidth(10);
    ofCircle(ofGetWidth()/2 + 45, ofGetHeight()/2 + 55, 265 + l);
    
    
 
    ofSetLineWidth(15);
    ofCircle(ofGetWidth()/2 + 45, ofGetHeight()/2 + 55, 285 + l);

    
    
    ofDrawBitmapString("Hello and Goodnight", mouseX, mouseY);
    
    
  
    
    
   
}






//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    mySound.play();
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
   

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
