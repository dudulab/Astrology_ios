//
//  DuducatViewController.m
//  astro
//
//  Created by dyun on 6/17/14.
//  Copyright (c) 2014 danyun.liu@gmail.com. All rights reserved.
//

#import "DuducatViewController.h"
#import <Duducat/UITextView+Duducat.h>
#import <Duducat/UIImageView+DuducatSDWebImageView.h>

@interface DuducatViewController ()
@end

@implementation DuducatViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    [self.astroTextView setTextWithKey:@"K1" placeholderText:@"正在加载中..."];
    [self.astroImageView setImageWithKey:@"k1"];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)click:(UIButton *)sender {
    [self resetButton:self.selectedAstro];
    [self highLightedButton:sender];
    self.selectedAstro = sender;
    NSString *key = [NSString stringWithFormat:@"K%ld", (long)sender.tag];
    [self.astroTextView setTextWithKey:key placeholderText:@"正在加载中..."];
    [self.astroImageView setImageWithKey:key];
    
}

- (void)resetButton:(UIButton *)button
{
    NSString *name = [NSString stringWithFormat:@"a%ld",(long)button.tag];
    [button setBackgroundImage:[UIImage imageNamed:name] forState:UIControlStateNormal];
    
}

- (void)highLightedButton:(UIButton *)button
{
    NSString *name = [NSString stringWithFormat:@"a%ld-hl",(long)button.tag];
    [button setBackgroundImage:[UIImage imageNamed:name] forState:UIControlStateNormal];
    
}

@end
