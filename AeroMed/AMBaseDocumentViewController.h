//
//  AMBaseDocumentViewController.h
//  AeroMed
//
//  Created by Michael Torres on 3/8/14.
//  Copyright (c) 2014 GVSU. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AMBaseDocumentViewController : UIViewController
@property (weak, nonatomic) IBOutlet UISearchBar *searchBar;
@property (nonatomic) BOOL isSubFolder;
@property (strong, nonatomic) NSMutableArray *viewControllerData;
@property (strong, nonatomic) NSArray *navigationStructure;
@end