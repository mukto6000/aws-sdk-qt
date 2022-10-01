// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTINVOKEAUTHORIZERRESPONSE_P_H
#define QTAWS_TESTINVOKEAUTHORIZERRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class TestInvokeAuthorizerResponse;

class TestInvokeAuthorizerResponsePrivate : public IoTResponsePrivate {

public:

    explicit TestInvokeAuthorizerResponsePrivate(TestInvokeAuthorizerResponse * const q);

    void parseTestInvokeAuthorizerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TestInvokeAuthorizerResponse)
    Q_DISABLE_COPY(TestInvokeAuthorizerResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
