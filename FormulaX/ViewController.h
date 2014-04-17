//
//  ViewController.h
//  iScience
//
//  Created by Philipp Kühn on 28.08.13.
//  Copyright (c) 2013 Philipp Kühn. All rights reserved.
//
/* NSLog(@"%.f", pow(3,2) ); //result 9
 NSLog(@"%.f", pow(3,3) ); //result 27
 NSLog(@"%.f", sqrt(16) ); //result 4
 NSLog(@"%.f", sqrt(81) ); //result 9
 */

#import <UIKit/UIKit.h>
#import <MessageUI/MessageUI.h>
#import "Reachability.h"


@interface ViewController : UIViewController {
    
    IBOutlet UIView* swipeView; //Swipe
    
    IBOutlet UIWebView *webView;
    IBOutlet UIActivityIndicatorView * active;
    
    NSTimer *timer;
    IBOutlet UIWebView *webView2;
    IBOutlet UIActivityIndicatorView * active2;
    
    //News
    
    IBOutlet UITextView * NewsView;
    
    
    
    //Gravitational pontential energy input
    IBOutlet UITextField* m_Input_gravitional; //Mass input in m*g*h
    IBOutlet UITextField* g_Input_gravitional; //Gravity input in m*g*h
    IBOutlet UITextField* h_Input_gravitional; //Height input in m*g*h
    IBOutlet UITextField* Ep_Input_gravitional; //Gravitional energ input
    
    //Shows the results for the gravitational potential energy
    IBOutlet UILabel* energy_result_gravitional;
    IBOutlet UILabel* m_result_gravitional;
    IBOutlet UILabel* g_result_gravitional;
    IBOutlet UILabel* h_result_gravitional;
    
    //Velocity input
    
    IBOutlet UITextField* velocity_input_velocity;
    IBOutlet UITextField* distance_input_velocity;
    IBOutlet UITextField* time_input_velocity;
    
    // Velocity results
    IBOutlet UILabel* velocity_result_velocity;
    IBOutlet UILabel* distance_result_velocity;
    IBOutlet UILabel* time_result_velocity;
    
    //Pressure input
    IBOutlet UITextField* pressure_input_pressure;
    IBOutlet UITextField* pressure_input_force;
    IBOutlet UITextField* pressure_input_area;
    
    //Pressure Result
    IBOutlet UILabel* pressure_result_pressure;
    IBOutlet UILabel* pressure_result_force;
    IBOutlet UILabel* pressure_result_area;
    
    //Accelaration input
    IBOutlet UITextField* acceleration_input_acceleration;
    IBOutlet UITextField* velocity_input_acceleration;
    IBOutlet UITextField* time_input_acceleration;
    
    
    //Accaleration Result
    IBOutlet UILabel* acceleration_result_acceleration;
    IBOutlet UILabel* velocity_result_acceleration;
    IBOutlet UILabel* time_result_acceleration;
    
    //Work input
    IBOutlet UITextField* work_input_work;
    IBOutlet UITextField* work_input_distance;
    IBOutlet UITextField* work_input_force;
    
    
    //Work Result
    IBOutlet UILabel* work_result_work;
    IBOutlet UILabel* work_result_distance;
    IBOutlet UILabel* work_result_force;
    
    // Power input
    IBOutlet UITextField * power_input_power;
    IBOutlet UITextField * power_input_watt;
    IBOutlet UITextField * power_input_time;
    
    // Power result
    IBOutlet UILabel* power_result_power;
    IBOutlet UILabel* power_result_watt;
    IBOutlet UILabel* power_result_time;
    
    //Ekin input
    IBOutlet UITextField* Ekin_input_Ekin;
    IBOutlet UITextField* Ekin_input_mass;
    IBOutlet UITextField* Ekin_input_velocity;
    
    //Ekin
    IBOutlet UILabel* Ekin_result_Ekin;
    IBOutlet UILabel* Ekin_result_mass;
    IBOutlet UILabel* Ekin_result_velocity;
    
    //Fnet input
    IBOutlet UITextField* Fnet_input_Fnet;
    IBOutlet UITextField* Fnet_input_mass;
    IBOutlet UITextField* Fnet_input_acceleration;
    
    //Fnet result
    IBOutlet UILabel* Fnet_result_Fnet;
    IBOutlet UILabel* Fnet_result_mass;
    IBOutlet UILabel* Fnet_result_acceleration;
    
    //Pythagoras  input
    IBOutlet UITextField* PH_input_a;
    IBOutlet UITextField* PH_input_b;
    IBOutlet UITextField* PH_input_c;
    
    //Pythagoras  result
    IBOutlet UILabel* PH_result_a;
    IBOutlet UILabel* PH_result_b;
    IBOutlet UILabel* PH_result_c;
    
    
}

- (BOOL)connected;

- (IBAction)showEmail:(id)sender;

//Ep
-(IBAction)Ep_gravitional:(id)sender;
-(IBAction)m_gravitional:(id)sender;
-(IBAction)h_gravitional:(id)sender;
-(IBAction)g_gravitional:(id)sender;

//Velocity
-(IBAction)v_velocity:(id)sender;
-(IBAction)t_velocity:(id)sender;
-(IBAction)d_velocity:(id)sender;

//Pressure
-(IBAction)P_pressure:(id)sender;
-(IBAction)F_pressure:(id)sender;
-(IBAction)A_pressure:(id)sender;

//Acceleration
-(IBAction)T_acceleration:(id)sender;
-(IBAction)A_acceleration:(id)sender;
-(IBAction)V_acceleration:(id)sender;

// Work
-(IBAction)W_Work:(id)sender;
-(IBAction)D_Work:(id)sender;
-(IBAction)F_Work:(id)sender;

// Power
-(IBAction)Power_p:(id)sender;
-(IBAction)Power_w:(id)sender;
-(IBAction)Power_t:(id)sender;

//Ekin

-(IBAction)ekin_ekin:(id)sender;
-(IBAction)ekin_mass:(id)sender;
-(IBAction)ekin_velocity:(id)sender;

//Fnet
-(IBAction)Fnet_Fnet:(id)sender;
-(IBAction)Fnet_m:(id)sender;
-(IBAction)Fnet_a:(id)sender;

//Pythagoras
-(IBAction)PH_a:(id)sender;
-(IBAction)PH_b:(id)sender;
-(IBAction)PH_c:(id)sender;

-(IBAction)News:(id)sender;

//Ep
-(IBAction)Minus_Ep_gravitional:(id)sender;
-(IBAction)Minus_m_gravitional:(id)sender;
-(IBAction)Minus_h_gravitional:(id)sender;
-(IBAction)Minus_g_gravitional:(id)sender;

//Velocity
-(IBAction)Minus_v_velocity:(id)sender;
-(IBAction)Minus_t_velocity:(id)sender;
-(IBAction)Minus_d_velocity:(id)sender;

//Pressure
-(IBAction)Minus_P_pressure:(id)sender;
-(IBAction)Minus_F_pressure:(id)sender;
-(IBAction)Minus_A_pressure:(id)sender;

//Acceleration
-(IBAction)Minus_T_acceleration:(id)sender;
-(IBAction)Minus_A_acceleration:(id)sender;
-(IBAction)Minus_V_acceleration:(id)sender;

// Work
-(IBAction)Minus_W_Work:(id)sender;
-(IBAction)Minus_D_Work:(id)sender;
-(IBAction)Minus_F_Work:(id)sender;

// Power
-(IBAction)Minus_Power_p:(id)sender;
-(IBAction)Minus_Power_w:(id)sender;
-(IBAction)Minus_Power_t:(id)sender;

//Ekin

-(IBAction)Minus_ekin_ekin:(id)sender;
-(IBAction)Minus_ekin_mass:(id)sender;
-(IBAction)Minus_ekin_velocity:(id)sender;

//Fnet
-(IBAction)Minus_Fnet_Fnet:(id)sender;
-(IBAction)Minus_Fnet_m:(id)sender;
-(IBAction)Minus_Fnet_a:(id)sender;

//Pythagoras
-(IBAction)Minus_PH_a:(id)sender;
-(IBAction)Minus_PH_b:(id)sender;
-(IBAction)Minus_PH_c:(id)sender;

@end




/* -(IBAction)errechnenI:(id)sender {
 float U = [[spannung text] floatValue];
 float I = U / [[wiederstand text] floatValue];
 [staerkelabel setText:[NSString stringWithFormat:@"%3.3f ",I]];
 */