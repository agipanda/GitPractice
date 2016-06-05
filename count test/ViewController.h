//
//  ViewController.h
//  count test
//
//  Created by erijae on 2015/01/18.
//  Copyright (c) 2015年 erijae. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

{
    int number;
    IBOutlet UILabel * label;
    
}
-(IBAction)plus;
-(IBAction)minus;
-(IBAction)clear;


@end

