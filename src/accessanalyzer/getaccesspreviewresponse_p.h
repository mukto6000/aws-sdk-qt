// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCESSPREVIEWRESPONSE_P_H
#define QTAWS_GETACCESSPREVIEWRESPONSE_P_H

#include "accessanalyzerresponse_p.h"

namespace QtAws {
namespace AccessAnalyzer {

class GetAccessPreviewResponse;

class GetAccessPreviewResponsePrivate : public AccessAnalyzerResponsePrivate {

public:

    explicit GetAccessPreviewResponsePrivate(GetAccessPreviewResponse * const q);

    void parseGetAccessPreviewResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAccessPreviewResponse)
    Q_DISABLE_COPY(GetAccessPreviewResponsePrivate)

};

} // namespace AccessAnalyzer
} // namespace QtAws

#endif
