// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCESSPOINTCONFIGURATIONFOROBJECTLAMBDARESPONSE_P_H
#define QTAWS_GETACCESSPOINTCONFIGURATIONFOROBJECTLAMBDARESPONSE_P_H

#include "s3controlresponse_p.h"

namespace QtAws {
namespace S3Control {

class GetAccessPointConfigurationForObjectLambdaResponse;

class GetAccessPointConfigurationForObjectLambdaResponsePrivate : public S3ControlResponsePrivate {

public:

    explicit GetAccessPointConfigurationForObjectLambdaResponsePrivate(GetAccessPointConfigurationForObjectLambdaResponse * const q);

    void parseGetAccessPointConfigurationForObjectLambdaResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAccessPointConfigurationForObjectLambdaResponse)
    Q_DISABLE_COPY(GetAccessPointConfigurationForObjectLambdaResponsePrivate)

};

} // namespace S3Control
} // namespace QtAws

#endif
