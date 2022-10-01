// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describealarmmodelresponse.h"
#include "describealarmmodelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::DescribeAlarmModelResponse
 * \brief The DescribeAlarmModelResponse class provides an interace for IoTEvents DescribeAlarmModel responses.
 *
 * \inmodule QtAwsIoTEvents
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events occur. You can use AWS IoT Events API operations to create, read, update, and delete inputs and detector
 *  models, and to list their
 *
 * \sa IoTEventsClient::describeAlarmModel
 */

/*!
 * Constructs a DescribeAlarmModelResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAlarmModelResponse::DescribeAlarmModelResponse(
        const DescribeAlarmModelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTEventsResponse(new DescribeAlarmModelResponsePrivate(this), parent)
{
    setRequest(new DescribeAlarmModelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAlarmModelRequest * DescribeAlarmModelResponse::request() const
{
    Q_D(const DescribeAlarmModelResponse);
    return static_cast<const DescribeAlarmModelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTEvents DescribeAlarmModel \a response.
 */
void DescribeAlarmModelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAlarmModelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTEvents::DescribeAlarmModelResponsePrivate
 * \brief The DescribeAlarmModelResponsePrivate class provides private implementation for DescribeAlarmModelResponse.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a DescribeAlarmModelResponsePrivate object with public implementation \a q.
 */
DescribeAlarmModelResponsePrivate::DescribeAlarmModelResponsePrivate(
    DescribeAlarmModelResponse * const q) : IoTEventsResponsePrivate(q)
{

}

/*!
 * Parses a IoTEvents DescribeAlarmModel response element from \a xml.
 */
void DescribeAlarmModelResponsePrivate::parseDescribeAlarmModelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAlarmModelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTEvents
} // namespace QtAws
