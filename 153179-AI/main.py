#****************** Junaid Iqbal Raja *******************
#****************** ROLL # 153179     *******************

import nltk
fileName = raw_input('Enter the file name: ')

file = open(fileName, "r")

paragraph = ''
if file.mode == "r":
    paragraph = file.read()
file.close()

# *****************Read File***************
print '***************************************************'
print 'Paragraph'
print '***************************************************'
print paragraph


# Step-1***************Tokenization***************

sents = nltk.sent_tokenize(paragraph)
copySents = sents
words = [nltk.word_tokenize(sent) for sent in sents]



# Step-2***************POS Tagging***************

posWords = [nltk.pos_tag(word) for word in words]
print '\n***************************************************'
print 'Part of Speech'
print '***************************************************'

print posWords



print '\n***************************************************'
print 'Print Nouns'
print '***************************************************'
i = 0
for posWord in posWords:
    for x in posWord:
        if (x[1] == 'NN'):
            copySents[i] = copySents[i].replace(x[0], '__________')
            print x[0] + '=> NOUN'
    i = i + 1
    print '\n'


print '***************************************************'
print 'Fill in the blanks'
print '***************************************************'
i = 1
for copySent in copySents:
    print str(i) +'. '+copySent
    print '\n'
    i = i + 1



