// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEJOBTEMPLATERESPONSE_P_H
#define QTAWS_CREATEJOBTEMPLATERESPONSE_P_H

#include "mediaconvertresponse_p.h"

namespace QtAws {
namespace MediaConvert {

class CreateJobTemplateResponse;

class CreateJobTemplateResponsePrivate : public MediaConvertResponsePrivate {

public:

    explicit CreateJobTemplateResponsePrivate(CreateJobTemplateResponse * const q);

    void parseCreateJobTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateJobTemplateResponse)
    Q_DISABLE_COPY(CreateJobTemplateResponsePrivate)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
