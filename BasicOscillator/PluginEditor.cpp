/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
BasicOscillatorAudioProcessorEditor::BasicOscillatorAudioProcessorEditor (BasicOscillatorAudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    
    gainSlider.setSliderStyle(juce::Slider::SliderStyle::Rotary);
    gainSlider.setRange(0, 100);
    gainSlider.setValue(10);
    gainSlider.setTextBoxStyle(juce::Slider::TextBoxBelow, true, 100, 20);
    addAndMakeVisible(gainSlider);
    
    setSize (400, 300);
    
    
    
}

BasicOscillatorAudioProcessorEditor::~BasicOscillatorAudioProcessorEditor()
{
}

//==================================================================

void BasicOscillatorAudioProcessorEditor::sliderValueChanged(juce::Slider* slider) {
    if(slider == &gainSlider) {
    }
}

//==============================================================================
void BasicOscillatorAudioProcessorEditor::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));

    g.setColour (juce::Colours::white);
    g.setFont (15.0f);
    g.drawText("Gain Slider", getWidth() / 2 - 40, 10, 100, 15, juce::Justification::left); //label for slider
}

void BasicOscillatorAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
    gainSlider.setBounds(getWidth() / 2 - 25, getHeight() / 2 - 50, 50, 100); //This draws slider bounds
}
