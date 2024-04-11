/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package apl2;

/**
 *
 * @author mihai
 */
public class ThrillerAlbum extends Album {

    @Override
    public void addSong(Song song) {
        if ("Michael Jackson".equals(song.getComposer()) && song.getId() % 2 == 0) {
            songs.add(song);
            System.out.println(songs);
        }
    }
}
