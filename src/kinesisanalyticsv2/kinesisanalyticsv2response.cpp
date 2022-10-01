// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "kinesisanalyticsv2response.h"
#include "kinesisanalyticsv2response_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisAnalyticsV2 {

/*!
 * \class QtAws::KinesisAnalyticsV2::KinesisAnalyticsV2Response
 * \brief The KinesisAnalyticsV2Response class provides an interface for KinesisAnalyticsV2 responses.
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 */

/*!
 * Constructs a KinesisAnalyticsV2Response object with parent \a parent.
 */
KinesisAnalyticsV2Response::KinesisAnalyticsV2Response(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new KinesisAnalyticsV2ResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a KinesisAnalyticsV2Response object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from KinesisAnalyticsV2ResponsePrivate.
 */
KinesisAnalyticsV2Response::KinesisAnalyticsV2Response(KinesisAnalyticsV2ResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void KinesisAnalyticsV2Response::parseFailure(QIODevice &response)
{
    //Q_D(KinesisAnalyticsV2Response);
    Q_UNUSED(response);
    /*QXmlStreamReader xml(&response);
    if (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("ErrorResponse")) {
            d->parseErrorResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
    setXmlError(xml);*/
}

/*!
 * \class QtAws::KinesisAnalyticsV2::KinesisAnalyticsV2ResponsePrivate
 * \brief The KinesisAnalyticsV2ResponsePrivate class provides private implementation for KinesisAnalyticsV2Response.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 */

/*!
 * Constructs a KinesisAnalyticsV2ResponsePrivate object with public implementation \a q.
 */
KinesisAnalyticsV2ResponsePrivate::KinesisAnalyticsV2ResponsePrivate(
    KinesisAnalyticsV2Response * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace KinesisAnalyticsV2
} // namespace QtAws
