//
//  AppDelegate.h
//  FB-Integration-Sample
//
//  Created by utsavanand on 17/02/14.
//  Copyright (c) 2014 Utsav Anand. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <FacebookSDK/FacebookSDK.h>
#import "ViewController.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) ViewController *viewCtrl;

- (void)sessionStateChanged:(FBSession *)session state:(FBSessionState) state error:(NSError *)error;


@end
