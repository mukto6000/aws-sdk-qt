// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELAUNCHTEMPLATEVERSIONRESPONSE_P_H
#define QTAWS_CREATELAUNCHTEMPLATEVERSIONRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateLaunchTemplateVersionResponse;

class CreateLaunchTemplateVersionResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateLaunchTemplateVersionResponsePrivate(CreateLaunchTemplateVersionResponse * const q);

    void parseCreateLaunchTemplateVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateLaunchTemplateVersionResponse)
    Q_DISABLE_COPY(CreateLaunchTemplateVersionResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
