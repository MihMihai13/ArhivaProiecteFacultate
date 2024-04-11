/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package apl2;

import java.util.ArrayList;

/**
 *
 * @author cursant
 */
abstract class Album {

    ArrayList<Song> songs = new ArrayList<Song>();

    abstract void addSong(Song song);

    void removeSong(Song song) {
        songs.remove(song);
    }

    @Override
    public String toString() {
        String alb = new String("Album {songs=[");
        for (Song song : songs) {
            alb += song.toString();
        }
        alb += "]}";
        return alb;

    }

}
