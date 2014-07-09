//
//  DuducatViewController.h
//  astro
//
//  Created by dyun on 6/17/14.
//  Copyright (c) 2014 danyun.liu@gmail.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DuducatViewController : UIViewController
@property (strong, nonatomic) IBOutletCollection(UIButton) NSArray *astros;
@property (strong, nonatomic) IBOutlet UIButton *selectedAstro;

- (IBAction)click:(UIButton *)sender;
@property (strong, nonatomic) IBOutlet UIImageView *astroImageView;
@property (strong, nonatomic) IBOutlet UITextView *astroTextView;
@end
