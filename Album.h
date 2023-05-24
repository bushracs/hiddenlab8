//
//  Album.h
//  HiddenLab8
//
//  
//

#ifndef Album_h
#define Album_h

Class Album : Public Photo{
    
    Private:
    
    int id;
    
    string title, remarks;
    
    
    Public:
    
    Album createAlbum(){
        
        Album album;
        
        return album;
    }
    
    
};

#endif /* Album_h */
