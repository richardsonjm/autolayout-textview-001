//
//  ViewController.h
//  AutoText
//
//  Created by John Richardson on 6/10/16.
//  Copyright © 2016 John Richardson. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextView *textContent;
- (IBAction)leftButton:(id)sender;
- (IBAction)rightButton:(id)sender;

@end

