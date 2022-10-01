// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putscheduledupdategroupactionresponse.h"
#include "putscheduledupdategroupactionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::PutScheduledUpdateGroupActionResponse
 * \brief The PutScheduledUpdateGroupActionResponse class provides an interace for AutoScaling PutScheduledUpdateGroupAction responses.
 *
 * \inmodule QtAwsAutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch and terminate EC2 instances based on user-defined scaling
 *  policies, scheduled actions, and health
 * 
 *  checks>
 * 
 *  For more information, see the <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/">Amazon EC2 Auto Scaling
 *  User Guide</a> and the <a href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/Welcome.html">Amazon EC2 Auto
 *  Scaling API
 *
 * \sa AutoScalingClient::putScheduledUpdateGroupAction
 */

/*!
 * Constructs a PutScheduledUpdateGroupActionResponse object for \a reply to \a request, with parent \a parent.
 */
PutScheduledUpdateGroupActionResponse::PutScheduledUpdateGroupActionResponse(
        const PutScheduledUpdateGroupActionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new PutScheduledUpdateGroupActionResponsePrivate(this), parent)
{
    setRequest(new PutScheduledUpdateGroupActionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutScheduledUpdateGroupActionRequest * PutScheduledUpdateGroupActionResponse::request() const
{
    Q_D(const PutScheduledUpdateGroupActionResponse);
    return static_cast<const PutScheduledUpdateGroupActionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling PutScheduledUpdateGroupAction \a response.
 */
void PutScheduledUpdateGroupActionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutScheduledUpdateGroupActionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::PutScheduledUpdateGroupActionResponsePrivate
 * \brief The PutScheduledUpdateGroupActionResponsePrivate class provides private implementation for PutScheduledUpdateGroupActionResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a PutScheduledUpdateGroupActionResponsePrivate object with public implementation \a q.
 */
PutScheduledUpdateGroupActionResponsePrivate::PutScheduledUpdateGroupActionResponsePrivate(
    PutScheduledUpdateGroupActionResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling PutScheduledUpdateGroupAction response element from \a xml.
 */
void PutScheduledUpdateGroupActionResponsePrivate::parsePutScheduledUpdateGroupActionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutScheduledUpdateGroupActionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
