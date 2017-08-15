//
//  DetailViewController.h
//  MyTemplate
//
//  Created by Lauren Nicole Roth on 8/15/17.
//  Copyright © 2017 Lauren Nicole Roth. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MyTemplate+CoreDataModel.h"

@interface DetailViewController : UIViewController

@property (strong, nonatomic) Event *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

