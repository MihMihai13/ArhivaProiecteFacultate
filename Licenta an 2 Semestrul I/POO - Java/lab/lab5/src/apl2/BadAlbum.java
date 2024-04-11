/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package apl2;

/**
 *
 * @author mihai
 */
public class BadAlbum extends Album {

    @Override
    public void addSong(Song song) {
        int id = song.getId();
        int remainder, reversedId = 0;
        while (id != 0) {
            remainder = id % 10;
            reversedId = reversedId * 10 + remainder;
            id /= 10;
        }
        System.out.println();
        if (song.getName().length() == 3 && song.getId() == reversedId) {
            songs.add(song);
        }
    }

}
