#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

    float time = ofGetElapsedTimef();
    
    // go through every element in the ofPolyline
    for (int i = 0; i < line.size(); i++){

        // uncomment to add random noise to each element
        // line[i].x += ofRandom(-1,1);
        // line[i].y += ofRandom(-1,1);

        // uncomment to add a sine wave to x position
        // line[i].x += sin(time + line[i].y * 0.01) * 3;
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    // draw the ofPolyline line
    line.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    // when mouse is dragged, add a new vertex to ofPolyline line
    line.addVertex(x,y);
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    line.clear();

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
