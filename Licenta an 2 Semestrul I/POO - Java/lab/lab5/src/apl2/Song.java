/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package apl2;

/**
 *
 * @author cursant
 */

public class Song {
    String name;
    int id;
    String composer;

    public Song(String name, int id, String composer) {
        this.name = name;
        this.id = id;
        this.composer = composer;
    }

    public String getName() {
        return name;
    }

    public int getId() {
        return id;
    }

    public String getComposer() {
        return composer;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setId(int id) {
        this.id = id;
    }

    public void setComposer(String composer) {
        this.composer = composer;
    }
    
    @Override
    public String toString() {
        return "Song {name = " + name + ", id = " + id + ", composer = " + composer + "}";
    }
}
