/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class BasicOscillatorAudioProcessorEditor  : public juce::AudioProcessorEditor,
public juce::Slider::Listener

{
public:
    BasicOscillatorAudioProcessorEditor (BasicOscillatorAudioProcessor&);
    ~BasicOscillatorAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;
    
    void sliderValueChanged(juce::Slider* slider) override;

private:
    BasicOscillatorAudioProcessor& audioProcessor;
    juce::Slider gainSlider; // rotary slider
    double gainValue;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (BasicOscillatorAudioProcessorEditor)
};
