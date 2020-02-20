#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){
    
    if (bOn) {
        
        
    }
}

//--------------------------------------------------------------
void ofApp::draw(){

    //line = line.getSmoothed(3);
    
    ofSetColor(255,255,255);
    
    float time = ofGetElapsedTimef();
    for (int i = 0; i < myLines.size(); i++){
        float pct1 = sin(i*0.1 + time);
        float pct2 = sin(i*0.14 + time*0.3);
        
        // add two new colors to mesh
        ofSetBackgroundColor(ofColor(127 + 127 * pct2));
        ofSetColor(ofColor(127 + 127 * pct1));
        myLines[i].draw();
       /* ofPushMatrix();
            ofTranslate(4, 4);
        ofSetLineWidth(3);
            myLines[i].draw();
        ofPopMatrix();
        */
    }
        
    // measure time since app was executed
   
    
    // fmod(numer, denom) returns a floating point
    // which is the remainder when dividing numer/denom
    // so in this case position is a sawtooth wave between 0.0 and 1.0

    //ofPolyline resampled = line.getResampledBySpacing(20);
    //for (int i = 0; i < resampled.size(); i++){
        //ofDrawCircle(resampled[i], 10);
    //}
    //ofSetColor(0,255,0);
    //resampled.draw();
    
    
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

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

    //line.clear();
    class line tempLine;
    class line tempLineB;
    class line tempLineC;
    ofPoint start = ofPoint(mouseX,
                            mouseY);
    float distance = 50;
    float angle = 3 * PI/2; // ofRandom(0, PI);
    float angleB = -1 * PI/4;
    float angleC = -3 * PI/4;
    
    tempLine.a = start;
    tempLine.b = start + 100 * ofPoint(cos(angle),
                                            sin(angle));
    tempLineB.a = start + 20 * ofPoint(cos(angle),
                                       sin(angle)); //prev li
    tempLineB.b = start + distance * ofPoint(cos(angleB),
                                             sin(angleB));
    
    tempLineC.a = start + 20 * ofPoint(cos(angle),
                                       sin(angle)); //prev li
    tempLineC.b = start + distance * ofPoint(cos(angleC),
                                             sin(angleC));
    
    ofPolyline footprint;
    
    footprint.addVertex(tempLine.a);
    footprint.addVertex(tempLine.b);
    footprint.addVertex(tempLine.a);
    
    footprint.addVertex(tempLineB.a);
    footprint.addVertex(tempLineB.b);
    footprint.addVertex(tempLineB.a);
    
    footprint.addVertex(tempLineC.a);
    footprint.addVertex(tempLineC.b);
    footprint.addVertex(tempLineC.a);
    
    
    
    myLines.push_back(footprint);
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    bOn = false;
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
