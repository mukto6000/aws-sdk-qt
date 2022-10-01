// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTDOMINANTLANGUAGERESPONSE_H
#define QTAWS_DETECTDOMINANTLANGUAGERESPONSE_H

#include "comprehendresponse.h"
#include "detectdominantlanguagerequest.h"

namespace QtAws {
namespace Comprehend {

class DetectDominantLanguageResponsePrivate;

class QTAWSCOMPREHEND_EXPORT DetectDominantLanguageResponse : public ComprehendResponse {
    Q_OBJECT

public:
    DetectDominantLanguageResponse(const DetectDominantLanguageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DetectDominantLanguageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetectDominantLanguageResponse)
    Q_DISABLE_COPY(DetectDominantLanguageResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
