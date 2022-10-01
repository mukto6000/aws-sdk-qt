// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIMAGESRESPONSE_P_H
#define QTAWS_LISTIMAGESRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class ListImagesResponse;

class ListImagesResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit ListImagesResponsePrivate(ListImagesResponse * const q);

    void parseListImagesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListImagesResponse)
    Q_DISABLE_COPY(ListImagesResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
