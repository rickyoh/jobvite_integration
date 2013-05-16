<div class="jobvite-field jobvite-location"><label><?php print t('Location');?>:</label><?php print $job['location']; ?></div>
<div class="jobvite-field jobvite-category"><label><?php print t('Category');?>:</label><?php print $job['category']; ?></div>
<div class="jobvite-field jobvite-description"><?php print $job['description']; ?></div>
<div class="jobvite-field jobvite-apply-url"><?php print l(t('apply here'), $job['apply-url']); ?></div>