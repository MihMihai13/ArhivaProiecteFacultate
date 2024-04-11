/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package apl2;

/**
 *
 * @author mihai
 */
public class DangerousAlbum extends Album {

    @Override
    public void addSong(Song song) {
        boolean prim = true;
        if (song.getId() == 0 || song.getId() == 1) {
            prim = false;
        }
        for (int i = 2; i < song.getId(); i++) {
            if (song.getId() % i == 0) {
                prim = false;
                break;
            }

        }
        if (prim == true) {
            songs.add(song);
        }
    }

}
