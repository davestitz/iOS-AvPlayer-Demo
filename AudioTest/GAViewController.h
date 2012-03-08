//
//  GAViewController.h
//  AudioTest
//
//  Created by Dave Stitz on 3/7/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import <CoreMedia/CoreMedia.h>
#import <AudioToolbox/AudioToolbox.h>

@interface GAViewController : UIViewController {
    UIButton *btnGo;
    UIButton *btnGoLocal;
    AVPlayer *player;
	NSTimer *playbackTimer;
}



@property (nonatomic, strong) IBOutlet UIButton *btnGo;
@property (nonatomic, strong) IBOutlet UIButton *btnGoLocal;


-(IBAction) BtnGoClick:(id)sender;
-(IBAction) BtnGoLocalClick:(id)sender;

-(IBAction) BtnPlay:(id)sender;
-(IBAction) BtnPause:(id)sender;


@end
