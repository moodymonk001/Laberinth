//ImageMagick Studio LLC. (2024).ImageMagick.Retrieved from https ://imagemagick.org

//FFmpeg Developers. (2016).ffmpeg tool(Version be1d324)[Software].
//Available from http ://ffmpeg.org/

template <typename identifier>
class identifier
{
	LOW LEVEL
        tools

        //VIDEO TO IMAGE FRAME CONVERTER 
        ffmpeg - i input.mp4 - c copy output.mov // Convert video file types
        video_to_image_frames = final -i " ".mov -vf "fps= int" frame
        ffmpeg - i IMG_8969.mov - vf "fps=10" frame % 4d.png // This converts the video into frames of your desired fps 
        
        
        //FILE TYPE MODIFIER
        magick input.jpg output.png // Changing the image format depending on your interest

        //MODIFY IMAGE PIXEL DIMENSIONS 
        magick identify - format "%wx%h" frame0022.png // Useful to rescale the image
		
        // PIXEL ARRAY INDEXING
        // OUTPUT INDIVIDUAL PIXEL MAP WITH RGB values
        // PIXEL MANIPULATION   
        magick frame0024.png output.txt
        // CUT PORTION OF THE IMAGE
		magick input.jpg -crop WIDTHxHEIGHT+X+Y +repage output.jpg		
        magick frame0022.png - crop 300x200 + 409 + 861 + repage output.png// Crop the image into the pixel size you want
		//300x200: The size of the area you want to keep(width x height in pixels). 
		// //+ 50 + 100 : The starting coordinate of the area(X - offset from the left, Y - offset from the top).The pixel at(0, 0) is the top - left corner.
		// Using frame0022.png as an example: [	[409, 861],	[775, 1056]]

		magick compare -metric rmse -subimage-search frame0022.png output.png similarity.png // Comparison between two images (different sizes); 
        magick frame0024.png output19.png - geometry 300x200 + 409 + 861 - composite outputFUTURE.png //image addition


        //USING TO DRAW PIXEL GRID LINES
        magick frame0024.png - crop 100x100 - background black - splice 2x2 - layers merge output.png
 


	magic identify - format input.jpg// Provides details related to the structure of the image
	# Store the full output

	# Store specific format properties

	



	magick output.png
		


abstractions

robriks
imageidentifiers
pixelation

for% f in(*.png) do magick compare "reference.png" "%f" "diff-%f"
for% f in(*.png) do magick compare "frame0024.png" "%f" "diff-%f" // This is the version I used
magick compare frame0024.png /C:/image.png diff.png

concurrency

Exactly querybuild

Build at compile time // Avoid run time because it was take up the processsing power trying to fill memory blocks for the query while calculating the "life" of each bunny query

command1& command2
magick frame0022.png - crop 300x200 + 409 + 861 + repage output212.png & magick frame0024.png - crop 300x200 + 409 + 861 + repage output213.png

    querybuild
#include <iostream>
#include <vector>
#include <future>
#include <chrono>

            int calculateResult(int factor) {
        std::this_thread::sleep_for(std::chrono::milliseconds(300));
        return factor * 2;
    }

    int main() {
        std::vector<std::future<int>> futures;

        // Launch tasks asynchronously 
        for (int i = 1; i <= 4; ++i) {
            futures.push_back(std::async(std::launch::async, calculateResult, i));
        }

        // Keep gathering results until all are completed
        int totalSum = 0;
        for (auto& fut : futures) {
            totalSum += fut.get(); // blocks until this specific task finishes
        }

        std::cout << "All tasks finished. Final total sum: " << totalSum << "\n";
        return 0;
    }
    // PREVIEWHANDLER CANOPENER

	portal canopener
		private
        magick compare - metric rmse - subimage - search frame0022.png output.png similarity.png
		local
        FOR / F "DELIMS=" % A IN('DIR /A-D /S /B "C:\*.*"') DO magick compare frame0024.png "%~A" >> C:\logfile.txt
		public
}
}

                                                                             .',;;:::cccc:;,..                                                                                                          
                                                                         .:dk0XNNWWLOLAWWWWNX0Oko:.          .                                                                                          
                                                                       .;oxkO0KNNWLABERINTHWWWWWWNO;..   .:lddoollc,.                                                                                   
                                                                      .,lx0XNWWWWWWWWWWWWWWWWWWWWWWXOo. ,dOOkkkkOkkOxl;.                                                                                
                                                                    'lOXWWWWWWWWWWWWWWWWWWWWWWWWWWWWWNx;oOkkkOkkOkkOxol;.',;;,..                                                                        
                                                                  'dXWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWklxkkkkkkOxocclodkkkOOkxdl'.                                                                     
                                                                .cKWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWNxlxOOkkxlccdkOkkkOOkkkkkOko;.                                                                   
                                                               .oXWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWNd:lllc;lkOkkOkkkkkkkkkkkkkkd,.                                                                 
                                                               :XWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWNo'''.,:cdkkOkkkkkkkkkkkkkkkko,.                                                               
                                                              .dWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWNd'.'''',;lxOkkkkkkkkkkkkkkkkkl.                                                              
                                                              .xWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWNNNk:''...'';dkkkkkkkkkkkkkkkkkkd,                                                             
                                                              .xWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWN0doxKNXx:''..'';dkkkkkkkkkkkkkkkOkkx:.                                                           
                                                               lNWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWNXOdodxdodxO0d;'..''cxxkkOOOkkkkkkkkkkkOk:.                                                          
                                                               .xNWWWNWWWWWWWWWWWWWWWWWWWWWWWWWWWWKdcldOOkkkkdooxkl,...,lloollloddxOOkkOkkkkk;                                                          
                                                                .dNWWWWWWWWWWWWWWWWWWWWWWWWWWWWWNOloxkkl:;;:ccoxolo:..;coOkkkxdolllccoxkOkkkOd'                                                         
                                                                 .:OXXWWWWWWWWWWWWWWWWWWWWWWWWWNdcxkdl,,coxxxdookkd:..clcdkkOOkkOOkl':olxkOkkOl.                                                        
                                                                   .,:xXWWWWWWXKNWWWWWWWWWWWWWNdcxOo::lkOkxxkOOkkkOko,cxcckkkkOkkkOx::kOkkkkkOk;                                                        
                                                                      .:kKNWWWNxxNWWWWWWWWWWWWOlxOOkkkkkko::cloxOkkkkxldd;lOkkkOkkkOo,oOOkkOkkOl.                                                       
                                                                        ,odxOKXXxkNWWWWWWWWWWNdlkOkkOOxl:;:cc:::okOkkOdldl:xOOkkOkkOk;:kOkkOkkOd,                                                       
                                                                       .okl,,:cll:lKWWWWWWWWWKloOkkkko;,:cc:ccc:;cdkkxxccoclkkkkOkkkOc,dOkOkkkkk:                                                       
                                                                       :xl;:ccc::;,lk0NWWWWWW0ldOkkl;,;cccccc::;'......',;,,okOkOkkkOo'cOkkOkkkOl.                                                      
                                                                      'dl;cccccccc;:ldxxkkO00kldOkl,;:ccccc:,';co; .,'.':;';xOkkOkkkkx,;kkkkkkkOo.                                                      
                                                                      ...';;,,,;cc:;ckOkxddddddkko,;cccc::;,::dKd' .dkxxkk:;xOOOOOOkkk:,xOkkOkkOd.                                                      
                                                                    .:l:lOKKKx:,;,:c:dOkkOkkkkkOx;,ccc:;cxOodd;.   .lOOkxxocodddoooodxc,dOkkkkkOx,                                                      
                                                                   .ckOdxNMMW0odlco:,ckkkkkkkkkOo,:c:;ckNMM0ldd;...,lddxkkO0KKKKK0Oxdo:.lOOkkkkkk;                                                      
                                                                  .oOkOddKMWWXddlco;.;xOkkkOkkkOo,;:cxXWMMWWKdodollldk0XNNNNNNNNNNNNN0d..dOkkkOOk:                                                      
                                                           .';:clcodoooocxNWMW0oo,.  ,xkkkkkOOkOo;c0WWMWMMWNXOoldOKNNNNNNNNNNNNNNNNNNN0o':xOOkkkk;                                                      
                                                        'lk0XNNWNNNXK0kxdoxxk0KOdool:ckkxdoodkkOxlOWMMMWXOkOkOKXNNNNNNNNNNNNNNNNNNNNNNNN0c:dkkkOk;                                                      
                                                      .ckNNNNNNNNNNNNNNNNNX0OkkkdcllcokxoloddddkOod000OkkkKNNNNNNNNNNNNNNNNNNNNNNNNNNNNX00l,dOkOk,                                                      
                                                      ;kKNNNNWNNNNNNNNNNNNNNNNWNK0OkoldoolllloddxddkOOKXNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNxcl;lOkOx'                                                      
                                                      cKWNNWNNNNNNNNNNNNNNNNNNNNNNNNX0kc;cc;:xOOk00kxxxkO0KXNNWNNNNNNNNNNNNNNNNNNNNNNNNN0::dkkkOd.                                                      
                                                      lOKNNNNNNNNNNNNNNXXK0OOO0kl;;dKXNXOdokXWNXKKd.  ....:kOO000KXNNNNNNNNNNNNNNNNNNNNKolkOkkkOo.                                                      
                                                      ,o0WNNNNNNNNNNX000000KKXNXk;.'okOkxxxO00kxo:...    .oNNXK0O0XNNNNNNNNNNNNNNNNNNN0ookOkkOOkc                                                       
                                                       .xNNNNNNNNNNNNXNNNNNNNNNNNXd. ...oXNNXXo.      .. :KNNNNNNNNNNNWNNNNNNNNNNNNNXx:okkkkkOOx;                                                       
                                                        'kNNNNNNNNNNNNNNNNNNWNNNNNNk,.  .;lllc'. .  ..  'kNNNNWNNNNNNNNNNNNNNNNNNNXOdc:xOkkkkkkl.                                                       
                                                         'xXNNNNNNNNNNNNNNNNNNNNNNNN0:.            .....dNNNNNNNNNNNNNNNNNNNNNNNKOddxcckOkkkkOk;                                                        
                                                          .c0NNNNNNNNNNNNNNNNNNNNNNNNK:. .   ....',;;;,lKNNNNNNNNNNNNNNNNNNNNKOkxdkOx:lOkkkkkOl.                                                        
                                                            .ckXNNNNNNNNNNNNNNNNNNNNNNK:   .',,,:cccc;:ONNNNNNNNNNNNNNNWNX0kxdxkOkkOo;dOkkkkOd.                                                         
                                                              .,lkXNNNNNNNNNNNNNNNNNNNN0;..,cc:cccc:;:ONNNNNNNNNNNNNNN0kkxxxkkkkkkkkc:xkkkOOx,                                                          
                                                                 .':okKNNNNNNNNNNNNNNNNN0c,:cccc:::lx0NNNNNNNNNNNNKOkkl:dkkOkkkkOkOx:ckkkkkOc.                                                          
                                                                     .':ox0XNNNNNNNNNNNNNKxololodx0XNNNNNNNNNNX0dcodxOd:oOOkkkkkOkOx:lOkkkOd'                                                           
                                                                          .';ldxOKXNNNNK0NNNNXNNNNNK00KNNNNN0xl'  :kOkklckOkkkkkOkOx;lOkkkk;                                                            
                                                                                ..,:coxdloO0KKK00OOOOKNNNXOooc.   'xOkOd:oOkkkkOkkOo;oOkkkl.                                                            
                                                                                        ..lOOOkO0KNNNNNNKxodl.    .lOkkklckkkkkkkkOl;xOkkx,                                                             
                                                                                          oNNNNNNNNNXNWKddkl.      ,xOkkxclkkkkkkkOc:kOkOl.                                                             
                                                                                         .kWNNNNNNNNNNXxokl. ..    .;odkOd:okkkkkkk::kkkk;                                                              
                                                                                     .:,.oXNNNNNNNNNNWOcc;.,dd,..:ccc:::cllcdOkkkkkc:kkOo'..                                                            
                                                                                ....:d:'lKNNNNNNNNNNNXl..:kXO;.'okkkkOkxoc:,;dkkkkklckkOo;lc.                                                           
                                                                            .,:ll,,d0c'lKNNNNNNNNNXxl:':kNWO;..oOkkkkkkkkOko;,okkkOl:xOOo;oxl'                                                          
                                                                          .cxkxl:o0Wx'cKWNNNNNNNKx:,'ckNWMKc..:kkkkkkkkkkkkkkl,:xkkl;dOOd;cxdd:.                                                        
                                                                        .:xkdodkKWWWd'dNNNNNNN0o;,lOXNMMMWx,.'dOkkkkkkkkkkkkkOd;'cxd:oOkx::xxxxo;.                                                      
                                                                      .;dxddx0NMWWMMO,:0NNXKxc,:dKWMWMMMMNo..ckkkkkkkkkkkkkkkOkx:..;,:kOkl',;:;;;.                                                      
                                                                     ,lodx0NWWWMWMMMNk;;:c:::lkNMMMMMMMMMNl..lOkkkkkkkkkkkkkkkkkkc';;,okOx,                                                             
                                                                   .,cokXWMWMMMWWMWWWWKkxxk0NWWWMMMMMMMMMXl..lOkkkkkkkkkkkkkkkkkkkl,cdxkkkl.                                                            
                                                                 .,:oONWMMMMMMMMWN0OkxxkkO0XWWWWMMMMMMMMMNl..lOkkkkkkkkkkkkkkkkkkkko;:xOkkk:.                                                           
                                                               .';o0NWMMMMMMMMWXOxodddooddodkKWWMMMMMMMWMWo.'lkkkkkkkkkkkkkkkkkkkkkOx;;xOkkx:                                                           
                                                              ':ckNMMMMMMMMWNX0olddddlcccloood0WMWWMWWWWWMx'.ckkkkkkkkkkkkkkkkkkkkOkkx:,okkOk:.                                                         
                                                            .:doxNMMMMMMWKkdolclllccllccccollld0KkxKNWMWMM0;.;xOdclxkkOkkkkkkkkkkkOkOOx;.',;c:.                                                         
                                                          .,dOklkWMMMMMMNkl:cllloolooolloooddoooollOWWMMMMNl.'lOkd:;cxkkkkkkkkkkkkkOkkOk:.                                                              
                                                         'lkkkkdo0WWWWMMWNKdccllllllllllcloolloddldKMMMMMMWk,.,dkxdc''cxkkkkkkkkkkkkkkOOkc.                                                             
                                                       .:xOkkkkkxokXWWWMWWWkcccccclllooolollldkkxdkNMWMMWMMXl..;xkxdoc..cxkkOkkOkkkkkkkkkkl.                                                            
                                                     .,okOkkkkkkkkxdxOXWWMWOoxOK0kdodddddodk0NWWNXNWMMMMMMMMKc..:kOkkc....lkkkkOkkkkkkkkkOko.                                                           
                                                    .ckkkkkOOkkOkkOkxodk0NWNNWWWWWX00OO000XWWWMMMMMMMMMMMMMMW0c'.:xkl..l, .,dkkkkkkkkkkkOkkOd'                                                          
                                                  .;dkkkkkkkOkkkkOOkkOkxclKWMMWWMMMMWNK0KXNWMWMMMMMMMMWWWMMMMMNOl:;;..lKx.  .:xOkkkkkOkkOkkkkx;.                                                        
                                                 .lkOkkkkOOkkkkkkOOkkdc;.lNWWWWWMMMMMWXXK000OO0KKKK00O0KNMMMMMMMWNXK00XWNl.   'okkkOkkOkkkkkkOkc.                                                       
                                                ;xkkkkkOkkkkkkkkkkdc;...,OWWMMMMMMMMMMMMMMMWNXKK00KKKKNWMMMMMMMMWWMMMWNOl'     .:kkkOkkkkkkkkkOkd,.                                                     
                                               .okkOkkkkkkkOkkkdlc,..  .,xXWMMMMMMMMMMMMMMMMMMMMMMMMMMMWMMMMMMMMWWWXkl'          ,dkkkkkkkkkOkkkkkl.                                                    
                                               .okkOkkkkkOkkkdlclxx;.    .,cdOXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMWN0Odc;.              .lkOkkkkkkkOkkkkOd,.                                                  
                                                .dOkkkkkOOkOOxxkkkkx;.       .,lxk0KNWWWMMMMMMMMMMMMWWNX0kxdddol'                  .lkkkkkkkkkkkkkkkkl.                                                 
                                                 .lkOkkOkkkOkkkkkkkOx:.        .cxxxxxxxkkOOOOOOkkkkkkxko:lxkOOl.       .;codddoc.  .lkkkkkkkkkkOkkOkkxc.                                               
                                                  .:xkkkkkkkkOOkOkkkOkc.        'xNNNXOkkkkkkkkkOO0XXXNWOoxOkOx'      'o0NNNWN0d:.   .lkkkkkkkkkkOOkkkOkd,                                              
                                                    .lkkkOkkkkkkOkkkkkkl..      .'xNNNNNNNNNNNNNNNNNNNNWOlxOOk:.... .:KNNNNNNNK0OOxl,..lkOkkkkOkkkOkkkkkkxc.                                            
                                                     .,dkkkkkOkkkkkkkkkOd,.      .,kNNNNNNNNNNNNNNNNNNNWOcdOkk;..,,'';xNNNNNNNNNNNNWXO:'oOkkkkkkkkkkkkkkkkkl.                                           
                                                       .;dkOkkkkkkkkkkkkkxc.      .;0NNNNNNNNNNNNNNNNNNW0coOkOo..,,,,.,xKNNNNNNNNNNNNNNx:dOkkkkkkkkkkkkkkkkkl.                                          
                                                         .;okkkkkkkkkkkkkOkd,.     .cKNNNNNNNNNNNNNNNNNNKclOxc'',,,,'':lllodOXNNNNNNNXO0kcdOkkkkkkkkkkkkkkkkkl.                                         
                                                           .,lxkkkkkkkOkkkkkkl..   ..oXNNNNNNNNNNNNNNNNNXocl,.,,',,',oXMWKkolcld0NNNNN0oc'.lkkOkkkkkkkkkkOOkkkl.                                        
                                                              'cdkkkkkkOkkOkkOxc.....,kNNNNNNNNNNNNNWNNXO:..',,,,'':kNMMWWMMWXkoclkXNNNd.  .;xkkkkkkkkkkkOkkOOk:.                                       
                                                                .,cdkkkOkkkOkkkkd,.,'.;kXXNNNWNWNNXOxdc;''',,,'',ckNMWMMMMMMMMMMNOlcxXWx.    .;okOkkkkkkkkkkOkkx;                                       
                                                                   .;okkkOkkkOkkkc.','',;:ccllollc:'..',,,,'',:d0NMWMMWWMMMMMMMWWWW0llx:       .'cdkkkkkkkkkkkkOx,                    .lo.              
                                                                     .'cxOOOkkkxoc;;,,',,,''''''',,,,'''',:lx0NMMMMWMMWWMMMMMMMMMWWMWOc.          .,lxkkkkkkOkkkkx;                .;dKK:         .':'  
                                                                        .:ooooddxOkx00xol:,,',,',;:ccloxkKNWMMMMMMMMMMMMMMMMMMMMMMMMMMNd'            .;okOkkkkOkkkx:..,.         .cONWX:      .,cx0Kd'  
                                                                         ,kKNNWMMNxOWWMMWXK000000KXWWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMW0:             .;oxOkkkkkkkkocdxl'   .':xKXOdoc''. .:d0NXkl'.   
                                                                          'oxxxxxooXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNo.             .,lxkkkOkkkkxl,d0;,dkXWWWXkdoloodkKWNOoll;.    
                                                                         'kXXK0KKdkWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWNd.              .:oxkkkkOkd:c0O;l0KNMMMMXOxx0NWXkc,;lkOkd:.  
                                                                  ..'',',0WWWMWWOdKMWMMMMMMMMMMMMMMMMMMMMWWMMMWWWWWWMMMMMMMMWMMWXK0OkkkO0KNNo.             ,OOlcooolllxX0::O00XMMMWWWWMNkc.   ...   .   
                                                            ..  .,:cokOdkWWWMWWXoxWWMMMMMMMMMMMMMMMMMMMMMMMMMWWNKXWMMMMMMMWMXOdl:,'......,:ll.             .kN0doodOKXOl,:xKWMMWMMMMMNx,.               
                                                            ;Ox:;lxkdo:lKWWWWKdloKWWMMMMMMMMMMMMMMMMMMMMMMMMMWKk0WMMMMMMMXko:...',;;::cc::'...              .:dxxxxdoooxKXXXWMWWMMMWXc.                 
                                                            .cXNklldOKddWMW0ddONMMMMMMMMMMMMMMMMMMMMMMMMMMMMWOxKWMMMMMW0d:...':ldkOOOkkOOOc.                      ;kKNMMMMMMMMWWMMMMXd;..               
                                                              :KWW0xddd0WKxd0WMMMMMMMMMMMMWMMMMMMMMMMMMMMMMWOxKMMMMMNOl,..,cdkOOkkkkkkkkkOo.                      .lKWWMMMMMMMMMMMMMWWWX0ko;.           
                                                               'xNMWWMWXxdONMWWMMMMMMMMMMWWMMMMMMMMMMMMMMMWOxXWMMWNkc'..,lkOkkkkkkkkkkkkkOx'                        .l0NWMMMMWWNXXKKKKXXXXNXk'          
                                                                .,xKNWK:'l0WMWWMMMMMMMMMW0ONMMMMMMMMMMMMMWOdXMWWNkc'..,okkkkOkkkkkkkkkkkkOx'                          .,collc;,'.........''''.          
                                                                   .,;'...,lONWMMMMMMMMMMXkxXMMMMMMMMMMMM0xKWWW0l,..,okkkkkkkOkkkkkkkkkkkOx'                                                            
                                                                          ..,cxXWMMWWMMMMWWOxKWWMMMMMMMMNxOMWXd,..'lkOkkOkkkkkkkkkkkkkkkkOx'                                                            
                                                                            ..':okXWWMWWMMMWKdxXWWMMMMMMkdXWO:'..:xkkkkkkkkkkkkkkkkkkkkkkOx'                                                            
                                                                           .;:,..';ldOKNWMMWWNkdx0XWMWWNodXd,..,dkkOkkkkkkkkkkkkkkkkkkkkkOd.                                                            
                                                                           ;kOxo:,....,codOKNWMN0xdkO0XKlol'.'lkOkOkkkkkkkkkkkkkkkkkkkkkkOd.                                                            
                                                                          'dkkkkkkdl:;,'...':loxOKKOkkko''..;dkkkkkkkkkkkkkkkkkkkkkkkkkkkOl.                                                            
                                                                         .lOkkkkkkkkOOkxol:,'....,:llox:..'lkkkkOkkkkkkkkkkkkkkkkkkkkkkkkk;                                                             
                                                                         ;kkOkkkkkkkOkkkOOOkkdoc:;,'.....;xkkkOkkkkkkkkkkkkkkkkkkkkkkkkkOd'                                                             
                                                                        'dkkkkkkkkkkkkkkkkkkkkkkOOkxooc.'xOkkkkOkkkkkkkkkkkkkkkkkkkkkkkkOl.                                                             
                                                                        :kkkkkkkkkkkkkkkkkkkkkkkkkkkkOx,,xOkkkkkkkkkkkkkkkkkkkkkkkkOkkkkk;                                                              
                                                                       'dkkkkkkkkkkkkkkkkkkkkkkkkkkkkOx',xOkkkkkkkkkkkkkkkkkkkkkkkkkkkkOo.                                                              
                                                                      .ckOkkOkkkkkkkkkkkkkkkkkkkkkkkkOx',xOkkkkkkkkkkkkkkkkkkkkkkOkkkkOk;                                                               
                                                                      'xkkkkkkkkkkkkkkkkkkkkkkkkkkkkkOx',kOkkkkkkkkkkkkkkkkkkkkkkkkOkkOo.                                                               
                                                                      cOkkkkkkkkkkkkkkkkkkkkkkkkkOkkkOx',kOkkkkkkkkkkkkkkkkkkkkkkkOkkOx'                                                                
                                                                     'xOkkkkkkkkkkkkkkkkkkkkkkkkkkOkkOx',kOkkkkkkkkkkkkkkkkkkkkkkkkkOk:                                                                 
                                                                    .ckkkkkkkkkkkkkkkkkkkkkkkkkkOOkkkkd',kOkkkkkkkkkkkkkkkkkkkkkOkkkkl.                                                                 
                                                                    'xOkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkOx',kOkkkkkkkkkkkkkkkkkkkkkkkkkd.                                                                  
                                                                    :kkkkkkkkkkkkkkkkkkkkkkkkkkkkOkOOk:.,xOkkkkkkkkkkkkkkkkkkkkkkkkx,                                                                   
                                                                   .oOkkkkkkkkkkkkkkkkkkkkkkkkkkkkkxo;. ,xkkkkkOkkkkkkkkkkkkkkkkkkk:.                                                                   
                                                                   'xOkkkkkkkkkkkkkkkkkkkkkkkkkOkkx;.   ,xkkkkkOkkkkkkkkkkkkkkkkkko.                                                                    
                                                                   ;kkkkkkkkkkkkkkkkkkkkkkkkkkkkOx,     ;kOkkkkkkkkkkkkkkkkkkkOkko.                                                                     
                                                                  .lOkkkkkkkkkkkkkkkkkkkkkkkOkkOd'      ;kkkkkOkkkkkkkkkkkkkkkkOd'                                                                      
                                                                  .dOkkkkkkkkkkkkkkkkkkkkkkkkOkl.       ;kkkkkOkkkkkkkkkkkkkOkkx;                                                                       
                                                                  ,xkkkkkkkkkkkkkkkkkkkkOkkkkx:.        :kOOkkkkkkkkkkkkkkkkkkOc.                                                                       
                                                                 .lOkkkkkkkkkkkkkkkkkkkkkkkOd,          ;kkkkkOkkkkkkkkkkkkkkOo.                                                                        
                                                                 .oOkkkkkkkkkkkkkkkkkkkkkkkl.           ;kkkkkOkkkkkkkkkkkkkkx,                                                                         
                                                                 'dOkkkkkkkkkkkkkkkkkkkkOkc.            cOOkkkkkkkkkkkkkkkkkk:                                                                          
                                                                 ,xOkkkkkkkkkkkkkkkkkkkOx,.            .oOkkkkkkkkkkkkkkkkkOo.                                                                          
                                                                 ;kOkkkkkkkkkkkkkkOkkkOd'              'dOkkOkkkkkkkkkkkkkkx,                                                                           
                                                                 :OkkkkkkkkkkkkOkkOkkOd.               :kkkkkkkkkkkkkkkkkkkc.                                                                           
                                                                 cOkkkkkkkkkkkkkkkkkOd'               'xOkkkkkkkkkkkkkkkkko.                                                                            
                                                                .lOkkOkkkkkkkkkkkkkkx,               .oOkkkkkkkkkkkkkkkkOx,                                                                             
                                                                .dOkkkkkkkkkkkkkkkkOc.             .,lkkkkkkkkkkkkkkkkkkOl.                                                                             
                                                                ,xOOkkkkkkkkkkkkkkOk;             'okkkkkkkkkkkkkkkOkkkkx,                                                                              
                                                                ,kOkkOkkkkkkkkkkkkOk;           .;xOOkOOkkkkkkkkkkkkkOkkl.                                                                              
                                                               .ckkkkOkkkkkkkkkkkkkk;          .ckOOkkkOkkkkkkkkkkkkkkOk;                                                                               
                                                               .oOkkkkkkkkkkkkkkkkkk;         .ckkkkkkkkkkkkkkkkkkkOkkOo.                                                                               
                                                               ;kkOkkkkkkkkkkkkkkkkk;        .lkkkkkkkkkkkkkkkkkkkkkkOx;                                                                                
                                                              'dOkkOkkkkkkkkkkkkkkkx'       .lkkkkkkkkkkkkkkkkkkkkkkkOl.                                                                                
                                                             .lkkkkOkkkkkkkkkkkkOOkc.       :kkkkkkkkkkkkkkkkkkkkOkkOd'                                                                                 
                                                            .ckkkkkkkkkkkkkkkkkkkko.       ,xkkOkkkkkkkkkkkkkkkkkkkkx;                                                                                  
                                                           .:kkkkkkkkkkkkkkkkkkkkd'       .oOkkkkkkkkkkkkkkkkkkkkkkk:                                                                                   
                                                           ;xOOkkkkkkkkkkkkkkkkko.        'xOkkkkkkkkkkkkkkkkkkkkkkc.                                                                                   
                                                          ;xkkkkkkkkkkkkkkOkkkkl.         :kkkkkkkkkkkkkkkkkkkkkkOl.                                                                                    
                                                        .:xkOkkkkkkkkOkkkkOkkd;           cOkkkkkkkkkkkkkkkkkkkkOo.                                                                                     
                                                       .ckkOkkOkOOkkkOkkkkkkl.           .lOkkkkkkkkkkkkkkkOkkOkd'                                                                                      
                                                      .ckOkkkOOkkkkOkkkkkkl,.             :kkkkkkkkkkkkkkkOkkkkd,                                                                                       
                                                     .ckkkkkkOkkkkkkkOkxl'.               ;kOkkkkkkkkkkkkkkkkkx;                                                                                        
                                                     ;kkkkkkOkkkkOkkOkl'                  'xOkkkkkkkkkkkkkkkOk:                                                                                         
                                                    'xOkkkkkkkkkOkkko,                    .lOkkkkkkkkkkkkkkOOc.                                                                                         
                                                   'dOkkkkkkkkkOkkx;.                      :kkkkkkkkkkkkkOkOo.                                                                                          
                                                  .oOkkkkkkkkkkkkl.                        ,xOkkkkkkkkkkkkOx'                                                                                           
                                                 .lkkkOkkkkkkkkd;.                         .dOkkkkkkkkkkkkkc.                                                                                           
                                                .ckkkkkOkkOkkkl.                           .lOkkkkkkkkkkkOd'                                                                                            
                                               .ckkkOkkkkOkkx:.                            .ckkkkkkkkkkkOk:                                                                                             
                                              .ckkkkkOkkkkkd,                               :kkkkkkkkkkkOx'                                                                                             
                                             .ckOkOkkOkkkkd'                                :kkkkkkkkkkkOo.                                                                                             
                                            .lkkkkkkkkkkOd'                                .ckkOkkkkkkkkOl.                                                                                             
                                           'okkkkkkkkkkOk;                                 .lOkkkkkkkkkkOc.                                                                                             
                                         .;dOkkkkkkkkkkkc.                                 'dOkkkkkkkkkkkc.                                                                                             
                                        'okkkkkkOkkOkkOd'                                  ;kOkkkkkkkkkkOl.                                                                                             
                                      .lxOOkkOkkkkkkkOOc                                  .lkkOkkkkkkkkkOd'                                                                                             
                                    .cxOkkkkkkkkOkkOOOk,                                  ,xOkkkkkkkkkkkkOl.                                                                                            
                                 .,cxkkkkkkkkkOkkOkkOdc'                                 .okkkOkkkkkkkkkkkk:                                                                                            
                              .'cdkkkOkkkkkkOOkkkOkxookl                                 .ckOkkkkkkkkkkkkkOx;                                                                                           
                           .'cdkkkkkkkkkkkkOkkkkkxookX0:                                :d,:xOkkkkkkkkkkkkkOkc.                                                                                         
                       ..,cdkkOkkkkkkkkkkOkkOOkdox0XOl.                                 ,0O;;dOkkkkkkOOkkkkOkkd,                                                                                        
               ..,:;.;odxkkkkOkkkkkkkkkkkkOOdooxKKx:.                                    'k0c,lxkkkkkkkkkkkkkOkkl'                                                                                      
         .':ldk0XNNXx:okOkkkkkkOOkkkkkkOkdodxOKOl'                                        .xXx;,okOkkkkkkkkkkOkkkxl'                                                                                    
      .;oOXNNNNNNNNNX0doodxkOOOOOOOkxdoodxOK0o,.                                           .lKKl,;dOOkkkkOkkkkkOkkkko;'.                                                                                
    .cOXNNNNNNNNNNNNNNNKOxdooddddddddxkOXNKo'                                                :KN0o::cldkOOkkOOOkxoccllc;,;::;,'..                                                                       
   ,kNNNNNNNNNNNNNNNNNNNNNNXKKKKKXXNNNNNXx'                                                   cKNNKkol;;:lllc::::coxO0KXNNNNNNXKOxo:.                                                                   
  ;ONNNOOXNNNNNNNNNNNNNNNNNNNNNNNNNNNNNKl.                                                    .cKNNNNNXOdllclox0XNNNNNNNNNNNNNNNNNNNKko,                                                                
 .xWNKdl0NNNNNNNNNNNNNNNNNNNNNNNNNNNNN0:.                                                      .cKNNNNNNNNNNNNNNNNNNNNXXXNNNNNNNNX00XNNXd'                                                              
 .xWKc:0NNNNNNNNNXKXNNNNNNNNNNNNNNNNN0;                                                         .:0NXNNNNNNNNNNNNNNNNNXKOkKNNNNNNNX0xkXNN0:.                                                            
  'xl,kNNNNNNNNNKloXNNNNNNNNNNNNNNNNO,                                                            ,kNNNNNNNNNNNNNNNNNNNNXxo0NNNNNNNNXxl0WNKc                                                            
   ..;KNNNNNNNNO;cKNNNNNNNNNNNNNNNNO,                                                              .,oKNNNNNNNNNNNNNNNNNNNdc0NNNNNNNNXocKNNx.                                                           
     'ONNNNNNNNl;0NNNNNNNNNNNNNNNXx'                                                                 .'oKNNNNNNNNNNNNNNNNN0cdNNNNNNNNN0ccxl.                                                            
      'dO0KXXKKc;KNNNNNNNNNNNNWNO:.                                                                     .:x0XNNNNNNNNNNNNNKclNNNNNNNX0x'                                                                
         ..'.....oKNNNNNNWNNXOo;.                                                                          .,:ldkkOOOOkxol,..,;::::;'.                                                                  
                  .,:cllllc;'.                                                                                      ..                                                                                  
                                                                                                                                                                                                        


@misc{vasiliossyrakis2026,	author = {Vasilios Syrakis}, 	title = {I was laid off by Atlassian}, 	year = {2026}, month = {May}, 	howpublished = {Video}, journal = {YouTube}, 	url = {https://youtu.be/55pTFVoclvE?si=OUxH0ig1ISuuPGwV} }
@misc{citadelsecurities2026,	author = {Citadel Securities}, 	title = {Juan Alday: Why C++ Wins in Finance}, 	year = {2026}, month = {April}, 	howpublished = {Video}, journal = {YouTube}, 	url = {https://youtu.be/InLxLEqg_fs?si=ha0CZ5BBsWWAPxF1} }
@book{schlossnagle2006scalable,  title={Scalable internet architectures},  author={Schlossnagle, Theo},  year={2006},  publisher={Pearson Education India}}
@book{iglberger2022c++,  title={C++ Software Design},  author={Iglberger, Klaus},  year={2022},  publisher={" O'Reilly Media, Inc."}}
@book{weiss2012data,  title={Data structures \& algorithm analysis in C++},  author={Weiss, Mark A},  year={2012},  publisher={Pearson Education}}
@book{williams2019c++,  title={C++ concurrency in action},  author={Williams, Anthony},  year={2019},  publisher={Simon and Schuster}}
