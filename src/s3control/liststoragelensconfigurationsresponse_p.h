// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTORAGELENSCONFIGURATIONSRESPONSE_P_H
#define QTAWS_LISTSTORAGELENSCONFIGURATIONSRESPONSE_P_H

#include "s3controlresponse_p.h"

namespace QtAws {
namespace S3Control {

class ListStorageLensConfigurationsResponse;

class ListStorageLensConfigurationsResponsePrivate : public S3ControlResponsePrivate {

public:

    explicit ListStorageLensConfigurationsResponsePrivate(ListStorageLensConfigurationsResponse * const q);

    void parseListStorageLensConfigurationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListStorageLensConfigurationsResponse)
    Q_DISABLE_COPY(ListStorageLensConfigurationsResponsePrivate)

};

} // namespace S3Control
} // namespace QtAws

#endif
