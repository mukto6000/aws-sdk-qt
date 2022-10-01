// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTTRACKERRESPONSE_H
#define QTAWS_DESCRIBEEVENTTRACKERRESPONSE_H

#include "personalizeresponse.h"
#include "describeeventtrackerrequest.h"

namespace QtAws {
namespace Personalize {

class DescribeEventTrackerResponsePrivate;

class QTAWSPERSONALIZE_EXPORT DescribeEventTrackerResponse : public PersonalizeResponse {
    Q_OBJECT

public:
    DescribeEventTrackerResponse(const DescribeEventTrackerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeEventTrackerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEventTrackerResponse)
    Q_DISABLE_COPY(DescribeEventTrackerResponse)

};

} // namespace Personalize
} // namespace QtAws

#endif
