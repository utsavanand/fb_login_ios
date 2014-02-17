//
//  ViewController.h
//  FB-Integration-Sample
//
//  Created by utsavanand on 17/02/14.
//  Copyright (c) 2014 Utsav Anand. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <FacebookSDK/FacebookSDK.h>

@interface ViewController : UIViewController<FBLoginViewDelegate>{
}
@property (strong, nonatomic) UIButton *customLoginBtn;
@end
